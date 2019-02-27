/*This file was automatically generated.*/
#ifndef d_oul_h
#define d_oul_h

typedef unsigned char u8;
#if !defined(bool) && !defined(__cplusplus)
typedef u8 bool;
#endif
typedef struct vec2 vec2;
typedef float r32;

struct vec2 {
    r32 x;
    r32 y;
};

char *get_ext(char *path);
bool insec(vec2 pos_a,vec2 size_a,vec2 pos_b,vec2 size_b);
vec2 vec2_sub(vec2 a,vec2 b);
vec2 vec2_add(vec2 a,vec2 b);
vec2 vec2_abs(vec2 v);
vec2 vec2_unit(vec2 v);
typedef double r64;
r64 vec2_len(vec2 v);
r64 vec2_to_angle(vec2 v);
vec2 vec2_scale(vec2 v,r64 factor);
vec2 value_vec2(r32 size_x,r32 size_y);
char *str_remove_characters(char *str,char c);
typedef unsigned int u32;
char *str_remove(char *str,u32 position);
char *str_cat(char const *a,char const *b);
char *str_insert(char *str,char c,u32 position);
typedef signed int s32;
char *alloc_str_slice(char *c,s32 begin,s32 end);
char *itoa(int num,char *str,int base);
void str_reverse(char *str);
bool str_eq(char *a,char *b);
bool str_contains(char *a, char b);
u32 str_len(char *str);
void zero_out(void *p,u32 size);

typedef struct rect rect;
struct rect {
    r32 x;
    r32 y;
    r32 w;
    r32 h;
};

typedef struct vec4 vec4;
struct vec4 {
    r32 x;
    r32 y;
    r32 z;
    r32 w;
};
typedef struct vec3 vec3;
struct vec3 {
    r32 x;
    r32 y;
    r32 z;
};

vec3 value_vec3(r32 x,r32 y,r32 z);
#if !defined(false) && !defined(__cplusplus)
#define false 0
#endif
#if !defined(true) && !defined(__cplusplus)
#define true 1
#endif

typedef signed char s8;
typedef signed short int s16;
typedef signed long long int s64;
typedef unsigned short int u16;
typedef unsigned long long int u64;

#if !defined(NULL)
#define NULL ((void *)0)
#endif

#define d_remove(array,array_size,position,fn) if(array_size) {\
fn(array[position]);\
for(i=position; i<array_size-1; i++)\
{\
array[i]=array[i+1];\
}\
array_size-=1;\
array=mem_realloc(array,array_size*sizeof(array[0]));\
}

#define d_append(array,array_size,element) array_size+=1;\
array=realloc(array,array_size*sizeof(element));\
array[array_size-1]=element;
#define d_insert(array,array_size,position,element) array_size+=1;\
array=mem_realloc(array,array_size*sizeof(element));\
for(i=array_size-2; i>=position; i--)\
{\
array[i+1]=array[i];\
}\
array[position]=element;

extern const r64 PI;

#endif
