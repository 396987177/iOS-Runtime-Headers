/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUMediaAlertView : UIAlertView  {
}

+ (id)_willBeginRentalPlaybackAlertWithRentalData:(id)arg1 mediaItem:(id)arg2;
+ (id)_notEnoughRentalTimeRemainingAlertWithMediaItem:(id)arg1;
+ (id)playbackAlertWithRentalMediaItem:(id)arg1 style:(int*)arg2;

- (id)initWithError:(id)arg1;
- (void)dealloc;
- (void)show;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;

@end