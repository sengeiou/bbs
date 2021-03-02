//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSBooleanArray : IOSArray
{
    _Bool buffer_[0];
}

+ (id)iosClass;
+ (id)arrayWithBooleans:(const _Bool *)arg1 count:(unsigned long long)arg2;
+ (id)newArrayWithBooleans:(const _Bool *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithLength:(unsigned long long)arg1;
+ (id)newArrayWithLength:(unsigned long long)arg1;
- (id)elementType;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (void)getBooleans:(_Bool *)arg1 length:(unsigned long long)arg2;
- (_Bool)replaceBooleanAtIndex:(unsigned long long)arg1 withBoolean:(_Bool)arg2;
- (_Bool *)booleanRefAtIndex:(unsigned long long)arg1;
- (_Bool)booleanAtIndex:(unsigned long long)arg1;

@end

