//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock>> m_core;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (void)setOrientation:(id)arg1;
- (id)init;

@end
