//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilMap_Entry.h"
#import "NSCopying.h"

@interface JavaUtilMapEntry : NSObject <JavaUtilMap_Entry, NSCopying>
{
    id key_;
    id value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)setValueWithId:(id)arg1;
- (unsigned long long)hash;
- (id)getValue;
- (id)getKey;
- (_Bool)isEqual:(id)arg1;
- (id)clone;
- (id)initWithId:(id)arg1 withId:(id)arg2;
- (id)initWithId:(id)arg1;

@end
