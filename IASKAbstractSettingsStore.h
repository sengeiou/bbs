//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IASKSettingsStore.h"

@class NSString;

@interface IASKAbstractSettingsStore : NSObject <IASKSettingsStore>
{
}

- (_Bool)synchronize;
- (double)doubleForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

