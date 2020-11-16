# Salt and Pepper
## О программе
Программа обрабатывает изображение медианным фильтром, что позволяет избавиться от белого шума "Salt and pepper".  
Распараллеливание вычислений на GPU заключается в обработке всех пикселей параллельно.
## Характеристики системы:
CPU: Intel(R) Core(TM) i5-6500 CPU @ 3.20GHz  
GPU: GeForce GTX 950  
RAM: 8GB  
OS: Ubuntu  
## Результаты:
Время обработки типового изображения на GPU: 1.3 ms  
Время обработки этого же изображения на CPU: 114.7 ms  
Исходное изображение:  
<img src="https://github.com/FireShine1/Salt-and-Pepper/blob/master/Lenna.bmp" />  
После обработки на GPU:  
<img src="https://github.com/FireShine1/Salt-and-Pepper/blob/master/result_gpu.bmp" />  
После обработки на CPU:  
<img src="https://github.com/FireShine1/Salt-and-Pepper/blob/master/result_cpu.bmp" />