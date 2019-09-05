#define ELAPSED_TIME(time, startTime) (time - startTime)
#define PERCENT_COMPLETE(bytes, totalBytes) ((bytes / totalBytes) * 100)
#define DOWNLOAD_SPEED(time, startTime, bytes) ((time - startTime) / bytes)
#define TOTAL_TIME(time, startTime, bytes, totalBytes) (totalBytes / ((time - startTime) / bytes))
#define REMAINING_TIME(time, startTime, bytes, totalBytes) ((totalBytes / ((time - startTime) / bytes)) - (time - startTime))

