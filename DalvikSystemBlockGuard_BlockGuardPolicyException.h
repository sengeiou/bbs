//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangRuntimeException.h"

@class NSString;

@interface DalvikSystemBlockGuard_BlockGuardPolicyException : JavaLangRuntimeException
{
    int mPolicyState_;
    int mPolicyViolated_;
    NSString *mMessage_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getMessage;
- (int)getPolicyViolation;
- (int)getPolicy;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (id)initDalvikSystemBlockGuard_BlockGuardPolicyExceptionWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;

@end

