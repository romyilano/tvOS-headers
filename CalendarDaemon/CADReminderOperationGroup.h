//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADReminderInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADReminderOperationGroup : CADOperationGroup <CADReminderInterface>
{
}

+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
+ (_Bool)requiresEventOrReminderAccess;
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(CDStruct_1ef3fb1f)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(CDUnknownBlockType)arg1;

@end
