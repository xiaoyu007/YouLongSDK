//
//  AppUserInfo.h
//  YlPlatformSDK
//
//  Created by ning on 14-10-28.
//  Copyright (c) 2014年 ning. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "Singleton.h"

@interface AppUserInfo : NSObject

@property (nonatomic,copy) NSString *pId;       /**<appid>**/

@property (nonatomic,copy) NSString *pkey;      /**<pkey>**/

@property (nonatomic,copy) NSString *niceName;  /**<昵称名>**/

@property (nonatomic,copy) NSString *userName;  /**<用户名>**/

@property (nonatomic,copy) NSString *userPassword;  /**<用户密码>**/

@property (nonatomic,copy) NSString *userPhone;  /**<用户手机>**/

@property (nonatomic,copy) NSString *version;  /**<版本>**/

@property (nonatomic,copy) NSString *imei;  /**<手机imei>**/

@property (nonatomic,copy) NSString *unit;  /**<手机型号>**/

@property (nonatomic,copy) NSString *phone;  /**<号码>**/

@property (nonatomic,copy) NSString *introduction;  /**<推广员ID>**/

@property (nonatomic,copy) NSString *sourceid;  /**<渠道ID>**/

@property (nonatomic,copy) NSString *tokan;

@property (nonatomic,copy) NSString *gameName;  /**<游戏名称>**/

@property (nonatomic,copy) NSString *gameid; /**<游戏ID>**/

@property (nonatomic,copy) NSString *rank_image;  /**<头像>**/

@property (nonatomic,assign) CGFloat u_b;  /**<U币>**/

@property (nonatomic,assign)BOOL isIdVerified;/**<是否认证>**/

@property (nonatomic,copy)NSString *idcard;/**<身份证号码>**/

@property (nonatomic,copy)NSString *iname;/**<真实姓名>**/
//SingletonH(AppUserInfo);
+ (instancetype)sharedAppUserInfo;

+(AppUserInfo *)getAppUserinfoWithJson:(NSDictionary *)json;
-(void)getAppUserinfoWithinfo:(AppUserInfo *)info;
+(AppUserInfo *)getUserInfoWithJson:(NSDictionary *)json;
//other
+(AppUserInfo *)getUserInfoOtherWithJson:(NSDictionary *)json;
@end
