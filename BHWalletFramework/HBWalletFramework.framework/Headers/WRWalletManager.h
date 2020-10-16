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
 *@Param userid 用户id
 *@Param currentViewController 当前控制器(非导航控制器)
 */
+ (void )openWalletMinePageWithUid:(NSString *)userid currentViewController:(UIViewController *)currentViewController;
/**
 *@Param userid 用户id
 *@Param payType 0:普通钱包支付 1:绑定卡代扣支付
 *@Param transAmount 金额
 *@Param remark 附言/备注
 *@Param currentViewController 当前控制器(非导航控制器)
 *@Param PayResultBlock 返回支付结果code 0-系统忙，请您稍后再试或与银行联系 1-支付成功 2-未开通钱包账户
 */
+ (void )PayWithUid:(NSString *)userid payType:(NSString *)payType transAmount:(NSString *)transAmount remark:(NSString *)remark  currentViewController:(UIViewController *)currentViewController PayResultBlock:(void(^)(NSString *backCode))PayResultBlock;
@end

NS_ASSUME_NONNULL_END
