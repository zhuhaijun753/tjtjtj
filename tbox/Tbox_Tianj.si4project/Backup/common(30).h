#ifndef _COMMON_H_
#define _COMMON_H_
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#ifndef DEBUG
	#define DEBUG 1
#endif

#if DEBUG
    #define DEBUGLOG(format,...) printf("### SYSLOG ### %s,%s[%d] "format"\n",__FILE__,__FUNCTION__,__LINE__,##__VA_ARGS__)
	#define DEBUG_NO(format,...) printf(format,##__VA_ARGS__)
#else
	#define DEBUGLOG(format,...)
	#define DEBUG_NO(format,...)
#endif



#ifndef __int8_t_defined
# define __int8_t_defined
typedef signed char     int8_t;
typedef short int       int16_t;
typedef int             int32_t;
# if __WORDSIZE == 64
typedef long int        int64_t;
# else
__extension__
typedef long long int   int64_t;
# endif
#endif

/* Unsigned. */
typedef unsigned char       uint8_t;
typedef unsigned short int  uint16_t;
#ifndef __uint32_t_defined
typedef unsigned int        uint32_t;
# define __uint32_t_defined
#endif
#if __WORDSIZE == 64
typedef unsigned long int   uint64_t;
#else
__extension__
typedef unsigned long long int uint64_t;
#endif




#define RELEASE_NOTE             "TBOX_A_"
#define BUILD_NOTE               "_Build_"


extern const unsigned char sysVerNumber[3];
extern unsigned char mcuVerNumber[3];


/***************************************************************************
* Function Name: getSoftwareVerion 					
* Function Introduction: get system software version	
* Parameter description:                               
*     pBuff: passed an array address                   
*     size : array size                                
* Function return value: 0	:success   					
* Data : 2017.09.08									
****************************************************************************/
extern int getSoftwareVerion(char *pBuff, unsigned int size);








#endif // _COMMON_H_

