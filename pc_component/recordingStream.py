import wave
import threading

class RecordingStream(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self, connection)
        self.seconds_recorded = 0
        self.continue_recording = False
        self.connection = socket

    def run(self):
        out_sound = wave.open('test.wav', 'wb')
        # (num of channels, sampling width in bytes, sampling rate, num of frames, compression type, compression name)
        out_sound.setparams((8, 2, 16000, 0, 'NONE', 'not compressed'))

        expected_bytes = 16000 * 2 * 8 # 1 second
        bytes_received = 0

        while bytes_received<expected_bytes:
            file_buffer = self.connection.recv(4096) # it will not always receive the specified bytes

            file_buffer_length = len(file_buffer)
            bytes_received += file_buffer_length

            if bytes_received>=expected_bytes:
                self.seconds_recorded +=1
                print self.seconds_recorded, "seconds recorded\r",
                if self.continue_recording:
                    bytes_received = bytes_received-expected_bytes                    
                else:
                    file_buffer = file_buffer[0:file_buffer_length - (bytes_received-expected_bytes)]
    
            out_sound.writeframes(file_buffer)

        out_sound.close()

        print str(self.seconds_recorded) + " second audio file saved"