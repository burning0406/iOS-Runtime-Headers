/* Generated by RuntimeBrowser.
 */

@protocol BWFigCameraSourceNode <NSObject>

@required

- (BWFigVideoCaptureDevice *)captureDevice;
- (NSDictionary *)colorInfoForOutput:(BWNodeOutput *)arg1;
- (BWNodeOutput *)detectedFacesOutput;
- (BWNodeOutput *)stillImageOutput;
- (BWNodeOutput *)videoCaptureOutput;
- (void)willStop;

@end
