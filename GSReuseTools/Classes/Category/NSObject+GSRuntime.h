//
//  NSObject+GSRuntime.h
//  ReuseCode
//
//  Created by 曹国盛 on 2021/12/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (GSRuntime)

/// 实例的方法替换
/// @param class 要实现的类
/// @param originSel 被换掉的方法
/// @param newSel 新方法
+ (void)GSSwizzMethodOfInstanceWithClass:(Class)class originSel:(SEL)originSel newSel:(SEL)newSel;



/// 类的方法替换
/// @param class 要实现的类
/// @param originSel 被换掉的方法
/// @param newSel 新方法
+ (void)GSSwizzMethodOfClassWithClass:(Class)class originSel:(SEL)originSel newSel:(SEL)newSel;



@end

NS_ASSUME_NONNULL_END
