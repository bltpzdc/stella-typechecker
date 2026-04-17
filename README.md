# Stella Type Checker

Проверка типов (тайпчекер) для языка программирования [Stella](https://fizruk.github.io/stella/).
Реализован на C++20 с использованием ANTLR 4 для лексического и синтаксического разбора.

## Сборка и запуск через Docker

```bash
docker build -t stella-typechecker .
```

Проверка программы на Stella:

```bash
docker run -i stella-typechecker < program.stella
```

Если программа корректно типизирована, в stdout будет выведено `Input program is well-typed!`
и процесс завершится с кодом `0`.

При ошибке типизации в stderr выводится сообщение с кодом ошибки,
процесс завершается с ненулевым кодом.

## Локальная сборка

Требования: `g++` (с поддержкой C++20), `cmake >= 3.20`, `ninja-build`, `uuid-dev`.

```bash
# Клонировать ANTLR 4 runtime (если отсутствует директория external/)
git clone --depth 1 --branch 4.13.1 https://github.com/antlr/antlr4.git external/antlr4

# Собрать
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --target stella_typechecker

# Запустить
./build/stella_typechecker < program.stella
```

## Запуск тестов

Скрипт `run_tests.sh` автоматически клонирует
[тестовый набор](https://github.com/ThatDraenGuy/stella_test_suite)
и прогоняет все тесты Stage 1 (обязательные + дополнительные расширения).

```bash
# Локально (после сборки)
./run_tests.sh

# Или указать путь к бинарнику явно
./run_tests.sh ./build/stella_typechecker

# Или через Docker
./run_tests.sh --docker
```

Для каждого теста проверяется:
- **well-typed** -- программа принята (exit code 0)
- **ill-typed** -- программа отклонена (exit code != 0) с правильным кодом ошибки в stderr

## Поддерживаемые возможности

### Ядро языка

- Программа (`AProgram`), объявление функций (`DeclFun`)
- Логические выражения: `TypeBool`, `ConstTrue`, `ConstFalse`, `If`
- Натуральные числа: `TypeNat`, `ConstInt`, `Succ`, `Pred`, `IsZero`, `NatRec`
- Функции первого класса: `TypeFun`, `Abstraction`, `Application`
- Переменные: `Var`

### Расширения

| Расширение | Статус |
|---|---|
| `#unit-type` | Реализовано |
| `#pairs`, `#tuples` | Реализовано |
| `#records` | Реализовано |
| `#let-bindings` | Реализовано |
| `#type-ascriptions` | Реализовано |
| `#sum-types` | Реализовано |
| `#lists` | Реализовано |
| `#variants` | Реализовано |
| `#fixpoint-combinator` | Реализовано |
| `#natural-literals` | Реализовано |
| `#nullary-functions`, `#multiparameter-functions` | Реализовано |
| `#nullary-variant-labels` | Реализовано |
| `#structural-patterns` | Не реализовано |
| `#let-patterns` | Не реализовано |

### Коды ошибок

Реализованы все 30 обязательных кодов ошибок из спецификации.

Дополнительно реализованы коды для необязательных расширений:

- `ERROR_INCORRECT_ARITY_OF_MAIN` (`#multiparameter-functions`)
- `ERROR_INCORRECT_NUMBER_OF_ARGUMENTS` (`#multiparameter-functions`)
- `ERROR_UNEXPECTED_NUMBER_OF_PARAMETERS_IN_LAMBDA` (`#multiparameter-functions`)
- `ERROR_UNEXPECTED_DATA_FOR_NULLARY_LABEL` (`#nullary-variant-labels`)
- `ERROR_MISSING_DATA_FOR_LABEL` (`#nullary-variant-labels`)
- `ERROR_UNEXPECTED_NON_NULLARY_VARIANT_PATTERN` (`#nullary-variant-labels`)
- `ERROR_UNEXPECTED_NULLARY_VARIANT_PATTERN` (`#nullary-variant-labels`)


### Для этапа 2

Поддержано все, включая дополнительные расширения. Неподдержанные расширения из п.1 не добавлялись.
