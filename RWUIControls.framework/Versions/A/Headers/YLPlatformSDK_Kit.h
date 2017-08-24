//
//  YLPlatformSDK_Kit.h
//  YLPlatformSDK
//
//  Created by YuLing on 2017/8/1.
//  Copyright © 2017年 YuLing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YLPlatformSDK.h"
@interface YLPlatformSDK_Kit : NSObject
/**
 * @brief loginState=0 未登录  1已登录  2注销
 */
@property (nonatomic,assign) unsigned int loginState;

/**
 * @brief 登入成功 回调
 */
@property (nonatomic, copy) void (^ylLoginSuccessBack)(NSString * paramToken);
/**
 * @brief 登入失败 回调
 */
@property (nonatomic, copy) void (^ylAutoLoginFailure)(AutoLoginFailure code);
/**
 * @brief 关闭充值页回调
 */
@property (nonatomic, copy) void (^ylCloseRechargeBack)();
/**
 * @brief 充值成功状态
 */
@property (nonatomic, copy) void (^ylResultCallBack)(PaymentStatus code);
/**
 * @brief 退出账号
 */
@property (nonatomic, copy) void (^ylExitAccount)(NSString * currentUserName);

/**
 * @brief 充值成功回调(私有的)
 */
@property (nonatomic, copy) void (^ylSuccessPayBack)(NSString * resultData);
/**
 * @brief     初始化SDK信息
 * @return    YlPlatformSDK    生成的YlPlatformSDK对象实例
 */
+ (YLPlatformSDK_Kit *)sharedInstance;

/**
 * 注意，需要重写代理方法  delegate＝self
 * @brief     弹出游龙登录页面
 * @animated  是否动画
 */
- (void)showLogin:(BOOL)animated;
/**
 *  @brief     弹出游龙充值页面
 *  @param orderId     订单号
 *  @param serverNum   服务区
 *  @param playerName  游戏角色名称
 *  @param productName 商品名称
 *  @param amount      充值金额
 *  @param extra       扩展信息
 *  @param gameName    游戏名称
 *  @param productId   苹果内购产品ID(序列号)
 *  @param success     苹果内购支付成功回调
 *  @param animated    是否显示动画
 */
- (void)showRechargeOrderId:(NSString *)orderId
                  serverNum:(NSString *)serverNum
                 playerName:(NSString *)playerName
                productName:(NSString *)productName
                     amount:(float)amount
                      extra:(NSString *)extra
                   gameName:(NSString *)gameName
                   animated:(BOOL)animated
               andproductId:(int)productId
              andcompletion:(void (^)(NSString * resultData))success;
/**
 *  @brief     弹出游龙充值页面
 *  @param orderId     订单号
 *  @param serverNum   服务区
 *  @param playerName  游戏角色名称
 *  @param productName 商品名称
 *  @param amount      充值金额
 *  @param extra       扩展信息
 *  @param gameName    游戏名称
 *  @param productID   苹果内购产品ID
 *  @param success     苹果内购支付成功回调
 *  @param animated    是否显示动画
 */
- (void)showRechargeOrderId:(NSString *)orderId
                  serverNum:(NSString *)serverNum
                 playerName:(NSString *)playerName
                productName:(NSString *)productName
                     amount:(float)amount
                      extra:(NSString *)extra
                   gameName:(NSString *)gameName
                   animated:(BOOL)animated
           andproductIDname:(NSString *)productID
              andcompletion:(void (^)(NSString * resultData))success;
/**
 *  @brief     获取用户的角色，等级，区服
 *  @param rolename    角色
 *  @param servernum   服务区
 *  @param roleId      角色ID
 *  @param level       等级
 */
-(void)getUserRolename:(NSString *)rolename
             andRoleID:(NSString *)roleId
          andServerNum:(NSString *)servernum
              andLevel:(NSString *)level
            complement:(void (^)(bool))result;
/**
 * @brief     获取当前用户名
 * @return    返回当前用户名
 */
- (NSString *)currentUserName;

/**
 *  @brief     注销当前账号
 */
-(void)cancelAccount;

@end
