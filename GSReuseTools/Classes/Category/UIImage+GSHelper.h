//
//  UIImage+GSHelper.h
//  ReuseCode
//
//  Created by 曹国盛 on 2021/12/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (GSHelper)


/// 使用UIColor创建UIImage
/// @param color 颜色
+ (UIImage *)GSCreateImageWithColor: (UIColor *)color;



@end

NS_ASSUME_NONNULL_END
