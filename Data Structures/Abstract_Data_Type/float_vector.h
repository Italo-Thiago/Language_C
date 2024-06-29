#ifndef FLOAT_VECTOR_H
#define FLOAT_VECTOR_H

/*************************************** INTERFACE PÚBLICA ****************************************/
typedef struct float_vector FloatVector;

FloatVector *Create(int capacity);
void Destroy(FloatVector **vecReference);
int Size(const FloatVector *vec);
int Capacity(const FloatVector *vec);
float At(const FloatVector *vec, int index);
float Get(const FloatVector *vec, int index);
void Append(FloatVector *vec, float val);
void Set(FloatVector *vec, int index, float val);
void Print(const FloatVector *vec); 

// Exercises
void Remove(const FloatVector *vec, int index);
void Erase(FloatVector *vec);
FloatVector *Clone(FloatVector *vec);


#endif