//
//  MBProgressHUD+DN.h
//  DNProgressHUD
//
//  Created by mainone on 16/9/7.
//  Copyright © 2016年 wjn. All rights reserved.
//

#import "MBProgressHUD.h"
#import <UIKit/UIKit.h>

@interface MBProgressHUD (DN)

/**
 *  转圈提示信息,不主动消失
 *
 *  @param message 提示内容
 */
+ (MBProgressHUD *)showMessage:(NSString *)message;
+ (MBProgressHUD *)showMessage:(NSString *)message toView:(UIView *)view;

/**
 *  提示成功
 *
 *  @param success 成功文字
 */
+ (void)showSuccess:(NSString *)success;
+ (void)showSuccess:(NSString *)success toView:(UIView *)view;

/**
 *  提示失败
 *
 *  @param error 失败文字
 */
+ (void)showError:(NSString *)error;
+ (void)showError:(NSString *)error toView:(UIView *)view;

/**
 *  上面图片 下面文字 可自定义图片 闪现提示
 *
 *  @param message 提示信息
 *  @param icon    显示图片
 */
+ (void)show:(NSString *)message icon:(NSString *)icon;
+ (void)show:(NSString *)message icon:(NSString *)icon view:(UIView *)view;

/**
 *  隐藏hud创建的
 */
+ (void)hideHUD;
+ (void)hideHUDForView:(UIView *)view;

/**
 *  黑框白字  闪现提示 根据文字调整  不是hud 创建// 先不考虑多行文字
 *
 *  @param message 提示信息,
 */
+ (void)tipView:(NSString *)message;
+ (void)tipView:(NSString *)message toView:(UIView *)view;

/**
 *  无数据页面提示
 */
+ (void)noDataTipView:(UIView *)view;
+ (void)noDataTipView:(UIView *)view title:(NSString *)title imageName:(NSString *)imageName;
+ (void)noDataTipView:(UIView *)view title:(NSString *)title imageName:(NSString *)imageName refresh:(void (^)())reload;
+ (void)noDataTipView:(UIView *)view title:(NSString *)title imageName:(NSString *)imageName refresh:(SEL)action addTarget:(id)target;


/**
 *  无网络页面提示
 */
+ (void)networkErrorTipView:(UIView *)view refresh:(void (^)())reload;
+ (void)networkErrorTipView:(UIView *)view refresh:(SEL)action addTarget:(id)target;
+ (void)networkErrorTipView:(UIView *)view title:(NSString *)title message:(NSString *)message refresh:(SEL)action addTarget:(id)target;
+ (void)networkErrorTipView:(UIView *)view title:(NSString *)title message:(NSString *)message refreshButtonClick:(void (^)())reload;

@end
