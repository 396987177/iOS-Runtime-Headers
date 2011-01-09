/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventAlarmTable, EKAlarm;



@interface EKEventAlarmEditViewController : EKEventEditItemViewController <CalendarEventAlarmTableDelegate>
{
    CalendarEventAlarmTable *_table;
    EKAlarm *_alarm;
    NSInteger _alarmIndex;
}

@property(retain) EKAlarm *alarm;
@property NSInteger alarmIndex;
@property NSInteger presetIdentifier;


- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAlarmIndex:(NSInteger)arg1;
- (void)setAlarm:(id)arg1;
- (id)alarm;
- (NSInteger)alarmIndex;
- (id)_table;
- (void)alarmTableDidChangeAlarm:(id)arg1;
- (void)setPresetIdentifier:(NSInteger)arg1;
- (NSInteger)presetIdentifier;
- (void)setCustomString:(id)arg1;
- (BOOL)customSelected;

@end