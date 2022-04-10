#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(float mean, float median, unsigned char min, unsigned char max);
void print_array(unsigned char *ptr, unsigned int size);
float find_median(unsigned char *ptr, unsigned int size);
float find_mean(unsigned char *ptr, unsigned int size);
unsigned char find_minimum(unsigned char *ptr, unsigned int size);
unsigned char find_maximum(unsigned char *ptr, unsigned int size);
void sort_array(unsigned char *ptr, unsigned int size);


#endif /* __STATS_H__ */
