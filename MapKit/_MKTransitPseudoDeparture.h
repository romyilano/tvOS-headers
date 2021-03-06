//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/GEOTransitDeparture-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _MKTransitPseudoDeparture : NSObject <GEOTransitDeparture>
{
    NSDate *_pseudoDepartureDate;
}

@property(retain, nonatomic) NSDate *pseudoDepartureDate; // @synthesize pseudoDepartureDate=_pseudoDepartureDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *vehicleIdentifier;
@property(readonly, nonatomic) NSDate *departureDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

