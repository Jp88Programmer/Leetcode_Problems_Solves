function earliestTime(tasks: number[][]): number {
    let minTime = tasks[0][0] + tasks[0][1];
    tasks.map(task => {
        minTime = Math.min(minTime,task[0] + task[1]);
    })
    return minTime;
};