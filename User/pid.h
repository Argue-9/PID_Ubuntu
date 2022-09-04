//
// Created by huangwenjun on 22-9-4.
//

#ifndef DEMO_PID_H
#define DEMO_PID_H

typedef struct
{
    float Kp;
    float Ki;
    float Kd;
    float err_now;
    float err_last;
    float err_lastlast; 		//增量式PID需要
    float err_all;
    float input_now;
    float out_now;

    float out_last;
    float target_now;

    float err_all_max;          //error限幅
    float ramp_target;          //斜坡目标值
    float ramp_target_step;     //斜坡步长

    float out_max;
    float out_step_max;
} PID_PramTypeDef;

void PID_DeInit(PID_PramTypeDef *WhichPID);
float PID_GetOutput(PID_PramTypeDef *WhichPID, float nowInput);
float PID_UpdateTargetNow(PID_PramTypeDef *WhichPID);


#endif //DEMO_PID_H
