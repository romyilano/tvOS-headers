//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSImage.h>

@class NSDate, NSString;

@interface PRSCalendarImage : PRSImage
{
    NSString *_bundleID;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 date:(id)arg2;

@end

