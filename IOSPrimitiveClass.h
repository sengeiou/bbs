//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSClass.h"

@class NSString;

@interface IOSPrimitiveClass : IOSClass
{
    NSString *name_;
    NSString *type_;
}

- (void)dealloc;
- (_Bool)__convertRawValue:(CDUnion_f43d4af3 *)arg1 toType:(id)arg2;
- (void)__writeRawValue:(CDUnion_f43d4af3 *)arg1 toAddress:(const void *)arg2;
- (void)__readRawValue:(CDUnion_f43d4af3 *)arg1 fromAddress:(const void *)arg2;
- (_Bool)__unboxValue:(id)arg1 toRawValue:(CDUnion_f43d4af3 *)arg2;
- (id)wrapperClass;
- (id)__boxValue:(CDUnion_f43d4af3 *)arg1;
- (id)binaryName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPrimitive;
- (id)getConstructorWithClasses:(id)arg1;
- (id)getDeclaredMethod:(id)arg1;
- (id)getMethod:(id)arg1;
- (id)getDeclaredMethods;
- (int)getModifiers;
- (_Bool)isInstance:(id)arg1;
- (_Bool)isAssignableFrom:(id)arg1;
- (id)description;
- (id)objcName;
- (id)getCanonicalName;
- (id)getSimpleName;
- (id)getName;
- (id)initWithName:(id)arg1 type:(id)arg2;

@end
