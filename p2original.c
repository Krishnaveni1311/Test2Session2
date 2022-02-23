#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the vertice of triangle\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a=(x1*(y2-y1)+x2*(y3-y1))
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)