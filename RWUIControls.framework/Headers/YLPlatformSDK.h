//
//  YLPlatformSDK.h
//  YLPlatformSDK
//
//  Created by YuLing on 2017/7/24.
//  Copyright © 2017年 YuLing. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 自动登录失败原因
 */
typedef enum {
    //网络异常
    AutoLoginFailureHttp=1000,
    //账号或密码异常
    AutoLoginFailureAccountOrPassword=2000,
    //未启动自动登录
    AutoLoginFailureSelectedNO=3000,
    //不存在账号
    AutoLoginFailureAccountNil=4000
} AutoLoginFailure;

/**
 *  充值状态
 */
typedef enum {
    //充值成功
    PaymentStatusSussess=1000,
    //充值异常
    PaymentStatusError=2000,
    //充值失败
    PaymentStatusFailure=3000,
} PaymentStatus;

//! Project version number for YLPlatformSDK.
FOUNDATION_EXPORT double YLPlatformSDKVersionNumber;

//! Project version string for YLPlatformSDK.
FOUNDATION_EXPORT const unsigned char YLPlatformSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YLPlatformSDK/PublicHeader.h>


