
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RegisterPage extends JFrame implements ActionListener {

    private JTextField userTextField;
    private JPasswordField passwordField;
    private JTextField emailTextField;
    private JButton registerButton;

    public RegisterPage() {
        // Frame settings
        setTitle("Register Page");
        setSize(350, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Panel to hold components
        JPanel panel = new JPanel();
        add(panel);
        placeComponents(panel);

        // Make the frame visible
        setVisible(true);
    }

    private void placeComponents(JPanel panel) {
        panel.setLayout(null);

        // Username label and text field
        JLabel userLabel = new JLabel("Username:");
        userLabel.setBounds(10, 20, 80, 25);
        panel.add(userLabel);

        userTextField = new JTextField(20);
        userTextField.setBounds(100, 20, 165, 25);
        panel.add(userTextField);

        // Email label and text field
        JLabel emailLabel = new JLabel("Email:");
        emailLabel.setBounds(10, 50, 80, 25);
        panel.add(emailLabel);

        emailTextField = new JTextField(20);
        emailTextField.setBounds(100, 50, 165, 25);
        panel.add(emailTextField);

        // Password label and text field
        JLabel passwordLabel = new JLabel("Password:");
        passwordLabel.setBounds(10, 80, 80, 25);
        panel.add(passwordLabel);

        passwordField = new JPasswordField(20);
        passwordField.setBounds(100, 80, 165, 25);
        panel.add(passwordField);

        // Register button
        registerButton = new JButton("Register");
        registerButton.setBounds(10, 110, 100, 25);
        panel.add(registerButton);

        registerButton.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String user = userTextField.getText();
        String email = emailTextField.getText();
        String passwords = new String(passwordField.getPassword());

        // Here, you would add your logic to handle the registration process (e.g., saving the user data)
        JOptionPane.showMessageDialog(this, "Registration Successful");
    }

    public static void main(String[] args) {
        // Run the registration page
        SwingUtilities.invokeLater(() -> new RegisterPage());
    }
}