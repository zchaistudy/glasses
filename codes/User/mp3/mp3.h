#ifndef __MP3_H
#define	__MP3_H


#include "stm32f10x.h"


#define head 3
#define hand 2
#define foot 1

#define first 		1
#define second 		2
#define third 		3
#define forth 		4
#define fifth 		5

extern u8 rate_1[5];
extern u8 Call[5];
extern u8 Next[5];
extern u8 Last[5];
extern u8 Add[5];
extern u8 Sub[5];

extern u8 rate_2[7];
extern u8 rate_3[7];
extern u8 rate_4[7];
extern u8 rate_5[7];
extern u8 CareFootay[7];
extern u8 CareHand[7];
extern u8 CareHead[7];

extern u8 East[7];
extern u8 South[7];
extern u8 West[7];
extern u8 North[7];
extern u8 SouthEast[7];
extern u8 SouthWest[7];
extern u8 NorthWest[7];
extern u8 NorthEast[7];

extern int Rate;



void USART3_Config(void);
void USART3_Send_String(u8 *p,u8 cnt);
void AddRate(void);
void SubRate(void);
void AddVolume(void);
void SubVolume(void);
int Weighting(int degree);
void PlayVoice(int position);
void PlayRate(int degree);
#endif /* __MP3_H */
