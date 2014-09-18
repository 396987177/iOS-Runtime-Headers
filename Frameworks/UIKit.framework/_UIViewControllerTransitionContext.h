/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, NSArray, NSString, UIView, _UIViewControllerTransitionCoordinator;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {
    struct { 
        unsigned int interactorImplementsCompletionSpeed : 1; 
        unsigned int interactorImplementsCompletionCurve : 1; 
        unsigned int transitionWasCancelled : 1; 
        unsigned int transitionIsCompleting : 1; 
    <UIViewControllerAnimatedTransitioning> *__animator;
    _UIViewControllerTransitionCoordinator *__auxContext;
    long long __completionCurve;
    id __completionHandler;
    double __completionVelocity;
    NSArray *__containerViews;
    id __didCompleteHandler;
    double __duration;
    id __interactiveUpdateHandler;
    <UIViewControllerInteractiveTransitioning> *__interactor;
    double __percentOffset;
    id __postInteractiveCompletionHandler;
    long long __state;
    id __willCompleteHandler;
    UIView *_containerView;
    NSArray *_disabledViews;
    long long _presentationStyle;
    double _previousPercentComplete;
    } _transitionContextFlags;
    bool__allowUserInteraction;
    bool__isPresentation;
    bool_initiallyInteractive;
    bool_isAnimated;
    bool_isCurrentlyInteractive;
    bool_rotating;
}

@property(getter=_allowUserInteraction,setter=_setAllowUserInteraction:) bool _allowUserInteraction;
@property(setter=_setAnimator:) <UIViewControllerAnimatedTransitioning> * _animator;
@property(setter=_setAuxContext:,retain) _UIViewControllerTransitionCoordinator * _auxContext;
@property(setter=_setCompletionCurve:) long long _completionCurve;
@property(setter=_setCompletionHandler:,copy) id _completionHandler;
@property(setter=_setCompletionVelocity:) double _completionVelocity;
@property(setter=_setContainerViews:,retain) NSArray * _containerViews;
@property(setter=_setDidCompleteHandler:,copy) id _didCompleteHandler;
@property(setter=_setDuration:) double _duration;
@property(setter=_setInteractiveUpdateHandler:,copy) id _interactiveUpdateHandler;
@property(setter=_setInteractor:) <UIViewControllerInteractiveTransitioning> * _interactor;
@property(setter=_setIsPresentation:) bool _isPresentation;
@property(setter=_setPercentOffset:) double _percentOffset;
@property(setter=_setPostInteractiveCompletionHandler:,copy) id _postInteractiveCompletionHandler;
@property(setter=_setState:) long long _state;
@property(setter=_setTransitionIsCompleting:) bool _transitionIsCompleting;
@property(setter=_setWillCompleteHandler:,copy) id _willCompleteHandler;
@property(getter=_affineTransform,readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } affineTransform;
@property(setter=_setContainerView:) UIView * containerView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(setter=_setInitiallyInteractive:) bool initiallyInteractive;
@property(setter=_setIsAnimated:) bool isAnimated;
@property(setter=_setIsCurrentlyInteractive:) bool isCurrentlyInteractive;
@property(setter=_setPresentationStyle:) long long presentationStyle;
@property(getter=_isRotating,setter=_setRotating:) bool rotating;
@property(readonly) Class superclass;

+ (id)_associatedTransitionContextForObject:(id)arg1;

- (void)__runAlongsideAnimations;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransform;
- (bool)_allowUserInteraction;
- (id)_animator;
- (id)_auxContext;
- (long long)_completionCurve;
- (id)_completionHandler;
- (double)_completionVelocity;
- (id)_containerViews;
- (id)_didCompleteHandler;
- (void)_disableInteractionForViews:(id)arg1;
- (double)_duration;
- (void)_enableInteractionForDisabledViews;
- (id)_interactiveUpdateHandler;
- (void)_interactivityDidChange:(bool)arg1;
- (id)_interactor;
- (bool)_isPresentation;
- (bool)_isRotating;
- (double)_percentOffset;
- (id)_postInteractiveCompletionHandler;
- (double)_previousPercentComplete;
- (void)_runAlongsideCompletions;
- (void)_setAllowUserInteraction:(bool)arg1;
- (void)_setAnimator:(id)arg1;
- (void)_setAuxContext:(id)arg1;
- (void)_setCompletionCurve:(long long)arg1;
- (void)_setCompletionHandler:(id)arg1;
- (void)_setCompletionVelocity:(double)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setContainerViews:(id)arg1;
- (void)_setDidCompleteHandler:(id)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setInitiallyInteractive:(bool)arg1;
- (void)_setInteractiveUpdateHandler:(id)arg1;
- (void)_setInteractor:(id)arg1;
- (void)_setIsAnimated:(bool)arg1;
- (void)_setIsCurrentlyInteractive:(bool)arg1;
- (void)_setIsPresentation:(bool)arg1;
- (void)_setPercentOffset:(double)arg1;
- (void)_setPostInteractiveCompletionHandler:(id)arg1;
- (void)_setPresentationStyle:(long long)arg1;
- (void)_setPreviousPercentComplete:(double)arg1;
- (void)_setRotating:(bool)arg1;
- (void)_setState:(long long)arg1;
- (void)_setTransitionIsCompleting:(bool)arg1;
- (void)_setTransitionIsInFlight:(bool)arg1;
- (void)_setWillCompleteHandler:(id)arg1;
- (long long)_state;
- (id)_transitionCoordinator;
- (bool)_transitionIsCompleting;
- (bool)_transitionIsInFlight;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1;
- (id)_willCompleteHandler;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForViewController:(id)arg1;
- (void)finishInteractiveTransition;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForViewController:(id)arg1;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCurrentlyInteractive;
- (bool)isInteractive;
- (long long)presentationStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (bool)transitionWasCancelled;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end