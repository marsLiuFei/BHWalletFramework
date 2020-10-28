//
//  WRWalletManager.h
//  WRWallet
//
//  Created by 如沐春风 on 2020/8/19.
//  Copyright © 2020 mars. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WRWalletManager : NSObject

/**
 *
 */
+(instancetype)defaultManager;
/**
 *项目基地址，全局配置一次即可，在调用实例方法前配置。
 *正式：http://www.uhomecp.com，测试：http://gamma.uhomecp.com
 **/
@property(nonatomic, copy)NSString *baseUrl;
/**
 *@Param userid 用户id
 *@Param currentViewController 当前控制器(非导航控制器)
 */
- (void )openWalletMinePageWithUid:(NSString *)userid currentViewController:(UIViewController *)currentViewController;
/**
 *@Param params  字典包含 字段(1.mUserId 用户id  2.payType 0:普通钱包支付 1:绑定卡代扣支付 3. transAmount 金额 4.remark 附言/备注 5.orderNumber 订单编号 6.requestTime 请求时间)
 *@Param currentViewController 当前控制器(非导航控制器)
 *@Param PayResultBlock 返回数据包含code、msg、data
 */
- (void )PayWithParams:(NSDictionary *)params  currentViewController:(UIViewController *)currentViewController PayResultBlock:(void(^)(NSDictionary *responseData))PayResultBlock;
@end

NS_ASSUME_NONNULL_END
