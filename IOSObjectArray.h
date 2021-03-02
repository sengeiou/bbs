//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

#import "NSFastEnumeration.h"

@class IOSClass;

@interface IOSObjectArray : IOSArray <NSFastEnumeration>
{
    IOSClass *elementType_;
    id buffer_[0];
}

+ (id)iosClassWithDimensions:(unsigned long long)arg1 type:(id)arg2;
+ (id)iosClassWithType:(id)arg1;
+ (id)newArrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2 type:(id)arg3;
+ (id)arrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2 type:(id)arg3;
+ (id)arrayWithNSArray:(id)arg1 type:(id)arg2;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithObjects:(const id *)arg1 count:(unsigned long long)arg2 type:(id)arg3;
+ (id)newArrayWithObjects:(const id *)arg1 count:(unsigned long long)arg2 type:(id)arg3;
+ (id)arrayWithLength:(unsigned long long)arg1 type:(id)arg2;
+ (id)newArrayWithLength:(unsigned long long)arg1 type:(id)arg2;
@property(readonly) IOSClass *elementType; // @synthesize elementType=elementType_;
- (id)memDebugStrongReferences;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (void)getObjects:(id *)arg1 length:(unsigned long long)arg2;
- (id)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

