//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JreMemDebugStrongReference : NSObject
{
    id object_;
    NSString *name_;
}

+ (id)strongReferenceWithObject:(id)arg1 name:(id)arg2;
@property(retain, nonatomic) NSString *name; // @synthesize name=name_;
@property(nonatomic) id object; // @synthesize object=object_;
- (void)dealloc;

@end

