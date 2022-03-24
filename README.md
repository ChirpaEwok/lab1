[![CI/CD GitHub Actions](https://github.com/ChirpaEwok/lab1/actions/workflows/test-action.yml/badge.svg)](https://github.com/ChirpaEwok/lab1/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/ChirpaEwok/lab1/badge.svg)](https://coveralls.io/github/ChirpaEwok/lab1)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=ChirpaEwok_lab1&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=ChirpaEwok_lab1)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=ChirpaEwok_lab1&metric=bugs)](https://sonarcloud.io/summary/new_code?id=ChirpaEwok_lab1)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=ChirpaEwok_lab1&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=ChirpaEwok_lab1)

# Модуль roots_tests.h
## Метод
### Тест №1 (zero_root)
Цель: Проверить работу функции на вычисление корней, когда дискриминант меньше нуля <br/>
Тип: Негативный <br/>
Входные данные: Значения, при которых дискриминант меньше нуля: <br/>
a = 0, b = 0, c = 5 <br/>
a = 2, b = 1, c = 2 <br/>
Ожидаемый результат: Возврат с кодом 0 <br/>

### Тест №2 (one_root)
Цель: Проверить работу функции на вычисление корней, когда дискриминант равен нулю <br/>
Тип: Позитивный <br/>
Входные данные: Значения, при которых дискриминант равен нулю: <br/>
a = 1, b = 2, c = 1 <br/>
Ожидаемый результат: Возврат с кодом 1 <br/>

### Тест №3 (two_root)
Цель: Проверить работу функции на вычисление корней, когда дискриминант больше нуля <br/>
Тип: Позитивный <br/>
Входные данные: Значения, при которых дискриминант больше нуля: <br/>
a = 1, b = 6, c = 5 <br/>
Ожидаемый результат: Возврат с кодом 2 <br/>
