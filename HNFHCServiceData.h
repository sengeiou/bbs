//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HNFHCServiceData : NSObject
{
    NSString *_title;
    NSArray *_servicesArray;
}

@property(retain, nonatomic) NSArray *servicesArray; // @synthesize servicesArray=_servicesArray;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)getHnamcData:(long long)arg1;
- (void)getProInsuranceData:(long long)arg1;
- (void)getEntrustData:(long long)arg1;
- (id)getHNFHCDataWithSubsidiary:(long long)arg1;

@end

