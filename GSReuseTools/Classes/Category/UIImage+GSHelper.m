//
//  UIImage+GSHelper.m
//  ReuseCode
//
//  Created by 曹国盛 on 2021/12/1.
//

#import "UIImage+GSHelper.h"

@implementation UIImage (GSHelper)


+ (UIImage *)GSCreateImageWithColor: (UIColor *)color{
    CGRect rect=CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return theImage;
}


@end
