FROM ubuntu:22.04 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
    g++ cmake ninja-build pkg-config uuid-dev git ca-certificates \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

RUN git clone --depth 1 --branch 4.13.1 https://github.com/antlr/antlr4.git external/antlr4

COPY src/ src/
COPY CMakeLists.txt .

RUN cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
    && cmake --build build --target stella_typechecker

FROM ubuntu:22.04

RUN apt-get update && apt-get install -y --no-install-recommends \
    libuuid1 \
    && rm -rf /var/lib/apt/lists/*

COPY --from=builder /app/build/stella_typechecker /usr/local/bin/stella_typechecker
COPY --from=builder /app/build/external/antlr4/runtime/Cpp/runtime/libantlr4-runtime.so* /usr/local/lib/
RUN ldconfig

ENTRYPOINT ["stella_typechecker"]
