//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class ALAssetsLibrary, AVAudioPlayer, CTCallCenter, NSData, NSDate, NSMutableArray, NSString, NSTimer;

@interface LinphoneManager : NSObject <NSStreamDelegate>
{
    struct __SCNetworkReachability *proxyReachability;
    NSTimer *mIterateTimer;
    NSMutableArray *pushCallIDs;
    int connectivity;
    unsigned long long pausedCallBgTask;
    unsigned long long incallBgTask;
    CTCallCenter *mCallCenter;
    NSDate *mLastKeepAliveDate;
    struct _CallContext currentCallContextBeforeGoingBackground;
    _Bool _isTesting;
    _Bool _speakerEnabled;
    _Bool _bluetoothAvailable;
    _Bool _bluetoothEnabled;
    _Bool _wasRemoteProvisioned;
    _Bool _nextCallIsTransfer;
    struct _LinphoneManagerSounds _sounds;
    int _tunnelMode;
    id <LinphoneManagerDelegate> _delegate;
    NSString *_projectName;
    const char *_frontCamId;
    const char *_backCamId;
    NSString *_SSID;
    NSData *_pushNotificationToken;
    NSMutableArray *_logs;
    ALAssetsLibrary *_photoLibrary;
    NSString *_contactSipField;
    struct _LpConfig *_configDb;
    NSMutableArray *_fileTransferDelegates;
    AVAudioPlayer *_messagePlayer;
}

+ (_Bool)isMyself:(const struct SalAddress *)arg1;
+ (void)setValueInMessageAppData:(id)arg1 forKey:(id)arg2 inMessage:(struct _LinphoneChatMessage *)arg3;
+ (id)getMessageAppDataForKey:(id)arg1 inMessage:(struct _LinphoneChatMessage *)arg2;
+ (_Bool)copyFile:(id)arg1 destination:(id)arg2 override:(_Bool)arg3;
+ (int)unreadMessageCount;
+ (id)cacheDirectory;
+ (id)documentFile:(id)arg1;
+ (id)bundleFile:(id)arg1;
+ (id)getCurrentWifiSSID;
+ (void)kickOffNetworkConnection;
+ (void)dumpLcConfig;
+ (struct _LinphoneCore *)getLc;
+ (_Bool)langageDirectionIsRTL;
+ (void)instanceRelease;
+ (id)instanceWithProjectName:(id)arg1;
+ (id)instance;
+ (id)getUserAgent;
+ (_Bool)isNotIphone3G;
+ (_Bool)isRunningTests;
+ (_Bool)runningOnIpad;
+ (_Bool)isCodecSupported:(const char *)arg1;
+ (id)unsupportedCodecs;
+ (id)getPreferenceForCodec:(const char *)arg1 withRate:(int)arg2;
@property(retain, nonatomic) AVAudioPlayer *messagePlayer; // @synthesize messagePlayer=_messagePlayer;
@property _Bool nextCallIsTransfer; // @synthesize nextCallIsTransfer=_nextCallIsTransfer;
@property(retain, nonatomic) NSMutableArray *fileTransferDelegates; // @synthesize fileTransferDelegates=_fileTransferDelegates;
@property(readonly) struct _LpConfig *configDb; // @synthesize configDb=_configDb;
@property(readonly) _Bool wasRemoteProvisioned; // @synthesize wasRemoteProvisioned=_wasRemoteProvisioned;
@property(readonly) NSString *contactSipField; // @synthesize contactSipField=_contactSipField;
@property(nonatomic) int tunnelMode; // @synthesize tunnelMode=_tunnelMode;
@property(readonly) ALAssetsLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) _Bool bluetoothEnabled; // @synthesize bluetoothEnabled=_bluetoothEnabled;
@property(nonatomic) _Bool bluetoothAvailable; // @synthesize bluetoothAvailable=_bluetoothAvailable;
@property(nonatomic) _Bool speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;
@property(readonly) NSMutableArray *logs; // @synthesize logs=_logs;
@property(readonly) struct _LinphoneManagerSounds sounds; // @synthesize sounds=_sounds;
@property(retain, nonatomic) NSData *pushNotificationToken; // @synthesize pushNotificationToken=_pushNotificationToken;
@property(retain, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly) const char *backCamId; // @synthesize backCamId=_backCamId;
@property(readonly) const char *frontCamId; // @synthesize frontCamId=_frontCamId;
@property(readonly) _Bool isTesting; // @synthesize isTesting=_isTesting;
@property(retain, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
@property(retain, nonatomic) id <LinphoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property int connectivity; // @synthesize connectivity;
- (void)_performDelegateBlock:(CDUnknownBlockType)arg1;
- (void)removeAllAccounts;
- (void)inappReady:(id)arg1;
@property(readonly, copy) NSString *contactFilter;
- (void)handleGSMCallInteration:(id)arg1;
- (void)setupGSMInteraction;
- (void)removeCTCallCenterCb;
- (_Bool)lpConfigBoolForKey:(id)arg1 inSection:(id)arg2 withDefault:(_Bool)arg3;
- (_Bool)lpConfigBoolForKey:(id)arg1 inSection:(id)arg2;
- (_Bool)lpConfigBoolForKey:(id)arg1 withDefault:(_Bool)arg2;
- (_Bool)lpConfigBoolForKey:(id)arg1;
- (void)lpConfigSetBool:(_Bool)arg1 forKey:(id)arg2 inSection:(id)arg3;
- (void)lpConfigSetBool:(_Bool)arg1 forKey:(id)arg2;
- (int)lpConfigIntForKey:(id)arg1 inSection:(id)arg2 withDefault:(int)arg3;
- (int)lpConfigIntForKey:(id)arg1 inSection:(id)arg2;
- (int)lpConfigIntForKey:(id)arg1 withDefault:(int)arg2;
- (int)lpConfigIntForKey:(id)arg1;
- (void)lpConfigSetInt:(int)arg1 forKey:(id)arg2 inSection:(id)arg3;
- (void)lpConfigSetInt:(int)arg1 forKey:(id)arg2;
- (id)lpConfigStringForKey:(id)arg1 inSection:(id)arg2 withDefault:(id)arg3;
- (id)lpConfigStringForKey:(id)arg1 inSection:(id)arg2;
- (id)lpConfigStringForKey:(id)arg1 withDefault:(id)arg2;
- (id)lpConfigStringForKey:(id)arg1;
- (void)lpConfigSetString:(id)arg1 forKey:(id)arg2 inSection:(id)arg3;
- (void)lpConfigSetString:(id)arg1 forKey:(id)arg2;
- (void)configureVbrCodecs;
- (void)configurePushTokenForProxyConfig:(struct _LinphoneProxyConfig *)arg1;
- (_Bool)call:(const struct SalAddress *)arg1 userData:(id)arg2;
- (void)acceptCall:(struct _LinphoneCall *)arg1 evenWithVideo:(_Bool)arg2;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (_Bool)allowSpeaker;
- (void)overrideDefaultSettings;
- (void)copyDefaultSettings;
- (void)renameDefaultSettings;
- (void)refreshRegisters;
- (void)endInterruption;
- (void)beginInterruption;
- (void)becomeActive;
- (_Bool)enterBackgroundMode;
- (void)startCallPausedLongRunningTask;
- (void)playMessageSound;
- (_Bool)resignActive;
- (_Bool)popPushCallID:(id)arg1;
- (void)addPushCallId:(id)arg1;
- (void)acceptCallForCallId:(id)arg1;
- (void)cancelLocalNotifTimerForCallId:(id)arg1;
- (void)resetLinphoneCore;
- (void)destroyLinphoneCore;
- (void)createLinphoneCore;
- (void)startLinphoneCore;
- (void)finishCoreConfiguration;
- (void)audioSessionInterrupted:(id)arg1;
- (void)iterate;
@property(readonly) int network;
- (void)setupNetworkReachabilityCallback;
- (struct __SCNetworkReachability *)getProxyReachability;
- (void)onMessageComposeReceived:(struct _LinphoneCore *)arg1 forRoom:(struct _LinphoneChatRoom *)arg2;
- (void)onCallEncryptionChanged:(struct _LinphoneCore *)arg1 call:(struct _LinphoneCall *)arg2 on:(_Bool)arg3 token:(const char *)arg4;
- (void)onNotifyReceived:(struct _LinphoneCore *)arg1 event:(struct _LinphoneEvent *)arg2 notifyEvent:(const char *)arg3 content:(const struct _LinphoneContent *)arg4;
- (void)onMessageReceived:(struct _LinphoneCore *)arg1 room:(struct _LinphoneChatRoom *)arg2 message:(struct _LinphoneChatMessage *)arg3;
- (void)onRegister:(struct _LinphoneCore *)arg1 cfg:(struct _LinphoneProxyConfig *)arg2 state:(int)arg3 message:(const char *)arg4;
- (void)configuringStateChangedNotificationHandler:(id)arg1;
- (void)onConfiguringStatusChanged:(int)arg1 withMessage:(const char *)arg2;
- (void)globalStateChangedNotificationHandler:(id)arg1;
- (void)onGlobalStateChanged:(int)arg1 withMessage:(const char *)arg2;
- (void)onCall:(struct _LinphoneCall *)arg1 StateChanged:(int)arg2 withMessage:(const char *)arg3;
- (void)localNotifContinue:(id)arg1;
- (void)displayStatus:(id)arg1;
- (void)migrationFromVersion2To3;
- (void)migrationLinphoneSettings;
- (void)migrateFromUserPrefs;
- (_Bool)migrateChatDBIfNeeded:(struct _LinphoneCore *)arg1;
- (void)silentPushFailed:(id)arg1;
- (void)dealloc;
- (id)initWithProjectName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
