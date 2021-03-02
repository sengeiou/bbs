//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HBUtilities : NSObject
{
}

+ (id)findViewControllerWithClass:(Class)arg1 inNavigationController:(id)arg2;
+ (id)topMostControllerInWindow:(id)arg1;
+ (id)topMostController;
+ (id)qrCodeWithInfo:(id)arg1 size:(struct CGSize)arg2;
+ (void)showAlertBy:(id)arg1 title:(id)arg2 message:(id)arg3 buttonTitle:(id)arg4 buttonHandler:(CDUnknownBlockType)arg5;
+ (double)getLabelHeight:(id)arg1;
+ (unsigned int)hexValueToUnsigned:(id)arg1;
+ (id)hexStringTransformFromThreeCharacters:(id)arg1;
+ (id)colorWith8BitRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3 alpha:(double)arg4;
+ (id)colorWith8BitRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
+ (id)colorWithHexString:(id)arg1;

@end

