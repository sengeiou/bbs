//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LibcoreIoStructStatVfs : NSObject
{
    long long f_bsize_;
    long long f_frsize_;
    long long f_blocks_;
    long long f_bfree_;
    long long f_bavail_;
    long long f_files_;
    long long f_ffree_;
    long long f_favail_;
    long long f_fsid_;
    long long f_flag_;
    long long f_namemax_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6 withLong:(long long)arg7 withLong:(long long)arg8 withLong:(long long)arg9 withLong:(long long)arg10 withLong:(long long)arg11;

@end

