#ifndef CUDAMEDIANFILTER_UTILS_H
#define CUDAMEDIANFILTER_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "EasyBMP/EasyBMP.h"


#define FILE_NAME "Lenna.bmp"
#define RESULT_NAME_CPU "result_cpu.bmp"
#define RESULT_NAME_GPU "result_gpu.bmp"

const int offset = 1;
const int offset_ = (2 * offset + 1) * (2 * offset + 1);


struct pairs {
    int fi;
    int se;
};

//CPU Median Filtering
void MedianFilterCPU(float *res, float *pixel_colors, int height, int width);

//GPU Median Filtering
void MedianFilterGPU(float *res, float *pixel_colors, int height, int width);

#endif
