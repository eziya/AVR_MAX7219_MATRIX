/*
 * MAX7219_Matrix.h
 *
 * Created: 2018-03-21 오후 3:32:06
 *  Author: kiki
 */ 


#ifndef MAX7219_MATRIX_H_
#define MAX7219_MATRIX_H_

#include <avr/io.h>

void MAX7219_MatrixInit(void);
void MAX7219_MatrixClear(uint8_t index);
void MAX7219_MatrixSetRow(uint8_t index,  uint8_t rows[8]);
void MAX7219_MatrixSetRow64(uint8_t index,  uint64_t rows);
void MAX7219_MatrixSetPixel(uint8_t index, uint8_t row, uint8_t col);
void MAX7219_MatrixLShift(uint8_t step);
void MAX7219_MatrixRShift(uint8_t step);
void MAX7219_MatrixUpdate();

#endif /* MAX7219_MATRIX_H_ */