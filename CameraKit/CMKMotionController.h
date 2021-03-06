//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAccelerometer, CMMotionManager;

@interface CMKMotionController : NSObject
{
    long long _dominantPhysicalButton;
    long long _captureOrientation;
    long long _deviceOrientation;
    BKSAccelerometer *__accelerometer;
    long long __numberOfDominantPhysicalButtonObservers;
    CMMotionManager *__physicalButtonMotionManager;
}

+ (id)sharedController;
@property(readonly, nonatomic) CMMotionManager *_physicalButtonMotionManager; // @synthesize _physicalButtonMotionManager=__physicalButtonMotionManager;
@property(nonatomic, setter=_setNumberOfDominantPhysicalButtonObservers:) long long _numberOfDominantPhysicalButtonObservers; // @synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers;
@property(retain, nonatomic, setter=_setAccelerometer:) BKSAccelerometer *_accelerometer; // @synthesize _accelerometer=__accelerometer;
@property(nonatomic, setter=_setDeviceOrientation:) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic, setter=_setCaptureOrientation:) long long captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(nonatomic) long long dominantPhysicalButton; // @synthesize dominantPhysicalButton=_dominantPhysicalButton;
- (void).cxx_destruct;
- (void)_setDominantPhysicalButton:(long long)arg1;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)_updatePhysicalButtonObservation;
- (void)dealloc;
- (id)init;

@end

