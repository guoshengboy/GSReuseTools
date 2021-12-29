//
//  NSObject+GSRuntime.m
//  ReuseCode
//
//  Created by 曹国盛 on 2021/12/7.
//

#import "NSObject+GSRuntime.h"
#import <objc/runtime.h>

@implementation NSObject (GSRuntime)


+ (void)GSSwizzMethodOfInstanceWithClass:(Class)class originSel:(SEL)originSel newSel:(SEL)newSel{
    
    Method originM = class_getInstanceMethod(class, originSel);
    Method newM = class_getInstanceMethod(class, newSel);
    method_exchangeImplementations(originM, newM);
}

+ (void)GSSwizzMethodOfClassWithClass:(Class)class originSel:(SEL)originSel newSel:(SEL)newSel{
    Method originM = class_getClassMethod(class, originSel);
    Method newM = class_getClassMethod(class, newSel);
    method_exchangeImplementations(originM, newM);
}



@end
