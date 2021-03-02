//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBGlobalSetting : NSObject
{
    NSString *_appUid;
    NSString *_apptNo;
    NSString *_custPhoneNo;
    double _requestTimeout;
}

+ (id)defaultSetting;
- (void).cxx_destruct;
@property(nonatomic) double requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property(retain, nonatomic) NSString *custPhoneNo; // @synthesize custPhoneNo=_custPhoneNo;
@property(retain, nonatomic) NSString *apptNo; // @synthesize apptNo=_apptNo;
@property(retain, nonatomic) NSString *appUid; // @synthesize appUid=_appUid;
- (void)takeReservationNumber:(id)arg1 branchNo:(id)arg2 apptNo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getReservationInfo:(id)arg1 termNo:(id)arg2 major:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getPersonalWelcomeMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBeaconInfo;
- (void)getInitialInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isAppUidAvailable;

@end
