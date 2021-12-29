//
//  UIColor+GSHelper.h
//  ReuseCode
//
//  Created by 曹国盛 on 2021/12/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface UIColor (GSHelper)


/// 十六进制转化成颜色  前面加不加#都行
/// @param colorString 颜色的16进制
+ (UIColor *)GSHexStringToColor: (NSString *) colorString;

/// 十六进制转化成颜色  前面加不加#都行
/// @param colorString 颜色的16进制
/// @param alphaValue 透明度
+ (UIColor *)GSHexStringToColor: (NSString *) colorString alpha:(CGFloat)alphaValue;

@end

NS_ASSUME_NONNULL_END
