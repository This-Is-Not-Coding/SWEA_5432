import java.io.*;
import java.util.Stack;

class SWEA_5432 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int testCase = Integer.parseInt(br.readLine());
        for(int tc=1; tc<=testCase; tc++) {
            char[] state = br.readLine().toCharArray();
            bw.write("#" + tc + " " + countSpices(state) + "\n");
            bw.flush();
        }

        br.close();
        bw.close();
    }

    private static int countSpices(char[] state) {
        Stack<Character> stack = new Stack<>();

        int spices = 0;
        char cur;
        char next;

        for(int i=0; i<state.length - 1; i++) {
            cur = state[i];
            next = state[i+1];

            if(isLaser(cur, next)) {
                spices += stack.size();
                i++;
                continue;
            }

            if(cur == '(') stack.add(cur);
            else {
                stack.pop();
                spices++;
            }
        }

        spices += stack.size();

        return spices;
    }

    private static boolean isLaser(char first, char second) {
        return first == '(' && second == ')';
    }
}