/* Generated by RuntimeBrowser
   Image: /var/containers/Bundle/Application/A77617CC-81F8-4D57-BCE6-77E8D969EEA1/UniqloWakeUp.app/UniqloWakeUp
 */

@interface UWAPIClient : AFHTTPClient <UIAlertViewDelegate>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedClient;

- (id)SNSAuthRequestWithSNSType:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithBaseURL:(id)arg1;
- (id)removeResultValue:(id)arg1;
- (void)requestInitWithResponse:(id)arg1;
- (void)requestLocationWithCountry:(id)arg1 state:(id)arg2 city:(id)arg3 response:(id)arg4;
- (void)requestLocationWithLat:(float)arg1 lon:(float)arg2 response:(id)arg3;
- (void)requestNewsWithResponse:(id)arg1;
- (void)requestSNSPostWithTime:(id)arg1 color:(int)arg2 weather:(int)arg3 temp:(int)arg4 lowtemp:(int)arg5 message:(id)arg6 response:(id)arg7;
- (void)requestWeatherWithAlarmFlag:(bool)arg1 location:(id)arg2 response:(id)arg3;
- (void)requestWeatherWithAlarmFlag:(bool)arg1 response:(id)arg2;
- (void)showAlertWithMessage:(id)arg1;

@end
