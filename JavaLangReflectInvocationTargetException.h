//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangReflectiveOperationException.h"

@class JavaLangThrowable;

@interface JavaLangReflectInvocationTargetException : JavaLangReflectiveOperationException
{
    JavaLangThrowable *target_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getCause;
- (id)getTargetException;
- (id)initWithJavaLangThrowable:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaLangThrowable:(id)arg1;
- (id)init;

@end

