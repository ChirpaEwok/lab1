[![CI/CD GitHub Actions](https://github.com/ChirpaEwok/lab1/actions/workflows/test-action.yml/badge.svg)](https://github.com/ChirpaEwok/lab1/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/ChirpaEwok/lab1/badge.svg?branch=master)](https://coveralls.io/github/ChirpaEwok/lab1?branch=master)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=ChirpaEwok_lab1&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=ChirpaEwok_lab1)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=ChirpaEwok_lab1&metric=bugs)](https://sonarcloud.io/summary/new_code?id=ChirpaEwok_lab1)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=ChirpaEwok_lab1&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=ChirpaEwok_lab1)

# Модуль roots_tests.h
## Метод ASSERT_EQ
### Тест №1 (amount_of_roots, zero_root)
<b>Цель:</b> Проверить работу функции на вычисление корней, когда дискриминант меньше нуля <br/>
<b>Тип:</b> Негативный <br/>
<b>Входные данные:</b> Значения, при которых дискриминант меньше нуля: <br/>
a = 2, b = 1, c = 2 <br/>
Два нулевых коэффициента: <br/>
a = 0, b = 0, c = 5 <br/>
Также для чисел с запятой: </br>
a = 1.5, b = 0.5, c = 1.5 <br/>
<b>Ожидаемый результат:</b> Возврат с кодом 0 <br/>

### Тест №2 (amount_of_roots, one_root)
<b>Цель:</b> Проверить работу функции на вычисление корней, когда дискриминант равен нулю <br/>
<b>Тип:</b> Позитивный <br/>
<b>Входные данные:</b> Значения, при которых дискриминант равен нулю: <br/>
a = 1, b = 2, c = 1 <br/>
Первый коэффинцент 0: <br/>
a = 0, b = 2, c = 4 <br/>
Также для чисел с запятой: </br>
a = 0.8, b = 1.6, c = 0.8 <br/>
<b>Ожидаемый результат:</b> Возврат с кодом 1 <br/>

### Тест №3 (amount_of_roots, two_root)
<b>Цель:</b> Проверить работу функции на вычисление корней, когда дискриминант больше нуля <br/>
<b>Тип:</b> Позитивный <br/>
<b>Входные данные:</b> Значения, при которых дискриминант больше нуля: <br/>
a = 1, b = 6, c = 5 <br/>
Второй коэффицент ноль: <br/>
a = -4, b = 0, c = 16 <br/>
Также для чисел с запятой: </br>
a = 1.5, b = 5, c = 1.5 <br/>
<b>Ожидаемый результат:</b> Возврат с кодом 2 <br/>

## Метод ASSERT_TRUE
### Тест №4 (root_values, zero_root)
<b>Цель:</b> Проверить значения корней, которые вычисляет функция, когда дискриминант меньше нуля <br/>
<b>Тип:</b> Негативный <br/>
<b>Входные данные:</b> Значения, при которых дискриминант меньше нуля: <br/>
a = 2, b = 1, c = 2 <br/>
Два нулевых коэффициента: <br/>
a = 0, b = 0, c = 5 <br/>
Также для чисел с запятой: </br>
a = 1.5, b = 0.5, c = 1.5 <br/>
<b>Ожидаемый результат:</b> x1 = NULL и x2 = NULL <br/>

## Метод ASSERT_EQ
### Тест №5 (root_values, one_root)
<b>Цель:</b> Проверить значения корней, которые вычисляет функция, когда дискриминант равен нулю <br/>
<b>Тип:</b> Позитивный <br/>
<b>Входные данные:</b> Значения, при которых дискриминант равен нулю: <br/>
a = 1, b = 2, c = 1 <br/>
Первый коэффинцент 0: <br/>
a = 0, b = 2, c = 4 <br/>
Также для чисел с запятой: </br>
a = 0.8, b = 1.6, c = 0.8 <br/>
<b>Ожидаемый результат:</b> В первом и третьем варианте x1 = -1.0 <br/>
Во втором случае x1 = -2.0 <br/>

## Метод ASSERT_(EQ, NEAR) 
### Тест №6 (root_values, two_root)
<b>Цель:</b> Проверить значения корней, которые вычисляет функция, когда дискриминант больше нулю <br/>
<b>Тип:</b> Позитивный <br/>
<b>Входные данные:</b> Значения, при которых дискриминант больше нуля: <br/>
a = 1, b = 6, c = 5 <br/>
Второй коэффицент ноль: <br/>
a = -4, b = 0, c = 16 <br/>
Также для чисел с запятой: </br>
a = 1.5, b = 5, c = 1.5 <br/>
<b>Ожидаемый результат:</b> В первом случае x1 = -1.0 и x2 = -5.0 <br/>
Во втором случае x1 = 2.0 и x2 = -2.0 <br/>
В третьем случае x1 ≈ -0.33 и x2 = -3.0 <br/>
