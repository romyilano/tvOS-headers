//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface SACalendarEvent : SADomainObject
{
}

+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)event;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSArray *recurrences;
@property(copy, nonatomic) NSNumber *readOnly;
@property(copy, nonatomic) NSString *notes;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSNumber *includeRecurrences;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSURL *calendarPunchoutURI;
@property(copy, nonatomic) NSURL *calendarId;
@property(copy, nonatomic) NSArray *attendees;
@property(nonatomic) _Bool allDay;
@property(copy, nonatomic) NSArray *alerts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

